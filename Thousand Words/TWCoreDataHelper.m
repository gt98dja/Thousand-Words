//
//  TWCoreDataHelper.m
//  Thousand Words
//
//  Created by Daniel Jansson on 2014-06-09.
//  Copyright (c) 2014 Daniel Jansson. All rights reserved.
//

#import "TWCoreDataHelper.h"

@implementation TWCoreDataHelper

+ (NSManagedObjectContext *)managedObjectContext
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]) {
        context = [delegate managedObjectContext];
    }
    
    return context;
}

@end
