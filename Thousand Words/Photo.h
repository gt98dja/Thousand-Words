//
//  Photo.h
//  Thousand Words
//
//  Created by Daniel Jansson on 2014-09-29.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) id image;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) Album *albumBook;

@end
