//
//  DetailViewController.h
//  RMProject
//
//  Created by mmakankov on 08/02/15.
//  Copyright (c) 2015 mmakankov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

