//
//  RMRecipeTableViewCell.h
//  RMProject
//
//  Created by mmakankov on 08/02/15.
//  Copyright (c) 2015 mmakankov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RMRecipeTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (weak, nonatomic) IBOutlet UILabel *idLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *cooktimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *caloriesLabel;

@end
