//
//  TWAlbumTableViewController.h
//  Thousand Words
//
//  Created by Daniel Jansson on 2014-06-09.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWAlbumTableViewController : UITableViewController

@property (strong, nonatomic) NSMutableArray *albums;
- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
