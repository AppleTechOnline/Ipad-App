//
//  DetailViewController.h
//  Socialguy
//
//  Created by AppleTechOnline on 7/6/14.
//  Copyright (c) 2014 AppleTechOnline. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
