class Watch {
	constructor(containerSelector) {
		this.container = document.querySelector(containerSelector)
		this.secondsHand = this.container.querySelector('[data-finger="s"]')
		this.minutesHand = this.container.querySelector('[data-finger="m"]')
		this.hoursHand = this.container.querySelector('[data-finger="h"]')

		this.update = this.update.bind(this)
		requestAnimationFrame(this.update)
	}

	update() {
		const now = new Date()

		const ms = now.getMilliseconds()
		const seconds = now.getSeconds() + ms / 1000
		const minutes = now.getMinutes() + seconds / 60
		const hours = now.getHours() % 12 + minutes / 60

		this.rotate(this.secondsHand, seconds * 6)
		this.rotate(this.minutesHand, minutes * 6)
		this.rotate(this.hoursHand, hours * 30)

		requestAnimationFrame(this.update)
	}

	rotate(element, deg) {
		element.style.transform = `rotate(${deg}deg)`
	}
}

new Watch('.watch')
