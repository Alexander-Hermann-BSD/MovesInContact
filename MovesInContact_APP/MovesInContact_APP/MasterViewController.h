//
//  MasterViewController.h
//  MovesInContact_APP
//
//  Created by Alexander Hermann on 15.05.15.
//  Copyright (c) 2015 Alexander Hermann – Beratung, Software, Design. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

