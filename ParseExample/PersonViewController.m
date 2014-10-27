//
//  ViewController.m
//  ParseExample
//
//  Created by S on 10/27/14.
//  Copyright (c) 2014 Ryan Siska. All rights reserved.
//

#import "PersonViewController.h"
#import <Parse/Parse.h> //step 4

@interface PersonViewController () <UITableViewDataSource, UITableViewDelegate>

@end

@implementation PersonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)onAddPersonButtonTapped:(id)sender {
    PFObject *person = [PFObject objectWithClassName:@"Person"];

    person[@"name"] = @"Johnny Appleseed";
    person[@"age"] = @22; // == [NSNumber numberWithInt:22];
    person[@"occupation"] = @"Appleseeder";

    [person saveInBackgroundWithBlock:^(BOOL succeeded, NSError *error) {
        if (error) {
            NSLog(@"Error: %@", [error userInfo]);
        }
        else {
            [self refreshDisplay];
        }
    }];
}

-(void)refreshDisplay
{
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 0;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"PersonCell"];
    return cell;
}
@end
