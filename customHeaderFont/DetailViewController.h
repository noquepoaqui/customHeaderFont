//
//  DetailViewController.h
//  customHeaderFont
//
//  Created by Andy Poole Bozzi on 06/11/14.
//  Copyright (c) 2014 BaseTIS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

