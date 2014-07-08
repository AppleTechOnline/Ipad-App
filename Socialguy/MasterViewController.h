//
//  MasterViewController.h
//  Socialguy
//
//  Created by AppleTechOnline on 7/6/14.
//  Copyright (c) 2014 AppleTechOnline. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (nonatomic, retain) NSArray *socialNames;
@property (nonatomic, retain) NSArray *socialAdress;

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
