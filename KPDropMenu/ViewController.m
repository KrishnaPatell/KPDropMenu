//
//  ViewController.m
//  KPDropMenu
//
//  Created by Krishna Patel on 22/03/17.
//  Copyright © 2017 Krishna. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<KPDropMenuDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    _drop.items = @[@"Apple", @"Grapes", @"Cherry", @"Pineapple", @"Mango", @"Orange"];
    _drop.itemsIDs = @[@"0", @"1", @"2", @"3", @"4", @"5"];
    _drop.itemsFont = [UIFont fontWithName:@"Helvetica-Regular" size:12.0];
    _drop.titleTextAlignment = NSTextAlignmentCenter;
    _drop.delegate = self;
    
    /* Adding Menu Programatically*/
    KPDropMenu *dropNew = [[KPDropMenu alloc] initWithFrame:CGRectMake(8, 250, 150, 50)];
    dropNew.delegate = self;
    dropNew.items = @[@"Apple", @"Grapes", @"Cherry", @"Pineapple", @"Mango", @"Orange"];
    dropNew.title = @"Select Again";
    dropNew.itemsFont = [UIFont fontWithName:@"Helvetica-Regular" size:12.0];
    dropNew.titleTextAlignment = NSTextAlignmentCenter;
    dropNew.DirectionDown = NO;
    [self.view addSubview:dropNew];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

#pragma mark - KPDropMenu Delegate Methods

-(void)didSelectItem : (KPDropMenu *) dropMenu atIndex : (int) atIntedex{
    if(dropMenu == _drop)
        NSLog(@"%@ with TAG : %ld", dropMenu.items[atIntedex], (long)dropMenu.tag);
    else
        NSLog(@"%@", dropMenu.items[atIntedex]);
}

-(void)didShow:(KPDropMenu *)dropMenu{
    NSLog(@"didShow");
}

-(void)didHide:(KPDropMenu *)dropMenu{
    NSLog(@"didHide");
}
@end
