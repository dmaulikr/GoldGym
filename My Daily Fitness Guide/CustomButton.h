//
//  CustomButton.h
//  My Daily Fitness Guide
//
//  Created by yogesh on 16/05/2014.
//  Copyright (c) 2014 yogesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomButton : UIButton

@property (nonatomic, strong) NSString *latitude, *longitude, *callString, *dayName, *dayWorkout, *dietPlan, *title, *address;
@property (nonatomic) int dayNumber;
@property (nonatomic, strong) NSString *fbPost, *fbImage, *fbTitle, *fbDescription, *fbLink;

@end
