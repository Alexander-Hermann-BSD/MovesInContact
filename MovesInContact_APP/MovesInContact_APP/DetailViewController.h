//
//  DetailViewController.h
//  MovesInContact_APP
//
//  Created by Alexander Hermann on 15.05.15.
//  Copyright (c) 2015 Alexander Hermann – Beratung, Software, Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

