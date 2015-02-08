//
//  Recipe.h
//  RMProject
//
//  Created by mmakankov on 08/02/15.
//  Copyright (c) 2015 mmakankov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Recipe : NSManagedObject

@property (nonatomic, retain) NSNumber * recipeId;
@property (nonatomic, retain) NSNumber * cooktime;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * image;
@property (nonatomic, retain) NSNumber * calories;

@end
