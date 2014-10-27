//
//  ViewController.m
//  ParseExample
//
//  Created by S on 10/27/14.
//  Copyright (c) 2014 Ryan Siska. All rights reserved.
//

#import "PersonViewController.h"

@interface PersonViewController () <UITableViewDataSource, UITableViewDelegate>

@end

@implementation PersonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)onAddPersonButtonTapped:(id)sender {
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
