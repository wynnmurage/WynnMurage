class  Roommate:
	def __init__(self,name,age,personality,artist,hobby):
		self.name=name
		self.age=age
		self.personality=personality
		self.artist=artist
		self.hobby=hobby
		
	def display_Roommate(self):
		print(f"my roommate's name is {self.name}.\nShe is {self.age} years old.\n she is {self.personality}.\nHer favourite artist is {self.artist} and her hobby is {self.hobby}")
		
roommate1=Roommate(name="Vivian",age=19,personality="shy",artist="wanavokali",hobby="singing and dancing")
		
roommate1.display_Roommate()