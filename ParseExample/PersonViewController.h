//
//  ViewController.h
//  ParseExample
//
//  Created by S on 10/27/14.
//  Copyright (c) 2014 Ryan Siska. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PersonViewController : UIViewController


@end


/*
 step 1
 - went to parse.com and downloaded the parse sdk - had to go through the process of data, mobile, ios, create new project - make sure to check Copy Items If Needed when putting the parse framework into xcode
 - then we needed to add a bunch of frameworks to make sure that Parse would work - libz, accounts.framework, addsupport.framework, etc - Don just told us what to add, he said they have to figure out which ones to add when they have a problem when trying to build - we added within the General main project area - after clicking the blue doc by ParseExample
 - we didnt drag over bolts framework because it's something facebook is doing - still not sure what it's useful for
 
 step 2
 - got an error so we did have to add the Bolts framework - Don saw the errors started with a B, so he assumed that was what we needed to add - when get a similar error it's because parse is trying to reference a framework or something in it that we havent added yet - we need to add it
 - embedded VC in Nav Controller and changed name to PersonVC
 - we also had to go to parse.com, create a new project app, and get the application ID and the client key - within the appDelegate.m we imported the parse.h file and then in didFinishLaunchingWithOptions - we added a method on parse that set the application id and the client key

step 3
 - within storyboard, added the table view and table view proto cell - set up the delegates (datasource and delegate) and set the proto cell identifier to PersonCell - then added the Add bar button item and added an IBAction for that in PersonVC.m
 - also in Person.m, we added the delegate and datasource within <> and then added the required methods for table view - number of rows and cell for row at index path

 */





