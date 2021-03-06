//
//  DRGLibraryBaseClass.h
//  HackerBooks2
//
//  Created by David Regatos on 14/04/15.
//  Copyright (c) 2015 DRG. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface DRGLibraryBaseClass : NSManagedObject

+ (NSArray *)observableKeys;

- (NSData *)archiveURIRepresentation;
+ (instancetype)unarchiveObjectWithURIRepresentation:(NSData *)archivedURI context:(NSManagedObjectContext *)context;

@end
