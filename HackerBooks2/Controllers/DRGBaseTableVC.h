//
//  DRGBaseTableVC.h
//  HackerBooks2
//
//  Created by David Regatos on 17/04/15.
//  Copyright (c) 2015 DRG. All rights reserved.
//

#import "AGTCoreDataTableViewController.h"
#import "DRGBookDetailVCDelegate.h"

@class DRGBook;
@class DRGTag;

@interface DRGBaseTableVC : AGTCoreDataTableViewController <DRGBookDetailVCDelegate>


- (DRGBook *)bookAtIndexPath:(NSIndexPath *)indexPath;

@end
