//
//  DRGBookListVC.h
//  HackerBooks2
//
//  Created by David Regatos on 14/04/15.
//  Copyright (c) 2015 DRG. All rights reserved.
//

#import "DRGBaseTableVC.h"

@interface DRGBookListVC : DRGBaseTableVC <UISearchBarDelegate,UISearchResultsUpdating,UISearchControllerDelegate>

@property (nonatomic, strong) UISearchController *searchController;

@end
