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
 
 step 4
 - we imported the Parse/Parse.h into the PersonVC
 - we then implemented within onAddPersonButtonTapped the ability to save something to our Parse account - when i ran the app and then clicked the add person button, it added a person with the info I said in the app to the parse account - a few important things with that - seems like we could run it a million times and get a million of the same people - we couldn't find a way to check to see if something was unique automatically within parse - may be something that has to be checked by the database or may have to research that a bit more to see if it's possible through parse
 - it will then refresh the display, which we called, created, but haven't put anything in yet
 - *** another important note, to get the age to be stored within parse, we're storing it within a dictionary - you can't store primitive data types within a dictionary, so we had to use @22
 
 step 5
 - added an array to store people and an IBOutlet for the tableView so we can reload it 
 - updated the refreshDisplay method we created in the previous step to pull from parse the information we had created within the "Person" section - the if methods check to see if there is an error first (always check to see if there is an error with parse - we may have hit the limit, parse may be taking too long, etc.) - if there is no error, then we set the people array we created equal to what came back from parse, so the people array will be an array of dictionaries housing the people information
 - we then updated the cellForRowAtIndexPath to get info from the people array, change it to a PFObject and then set whatever you want equal to that  - check notes in .m about a different want to get objectForKey
 
 
 


 */





