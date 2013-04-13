//
//  DetailViewController.h
//  CNTI
//
//  Created by timur tarasenko on 14.04.13.
//  Copyright (c) 2013 Timur Tarasenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
