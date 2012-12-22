//
//  FLFreelancersController.h
//  freelansim-client
//
//  Created by Кирилл on 22.12.12.
//  Copyright (c) 2012 Kirill Kunst. All rights reserved.
//

#import "FLBaseController.h"
#import "FLFreelancer.h"
#import "FLHTTPClient.h"
#import "FLCategoriesController.h"

@interface FLFreelancersController : FLBaseController <UITableViewDataSource, UITableViewDelegate,FLCategoriesDelegate> {
    int page;
    BOOL stopSearch;
    FLFreelancer *selectedFreelancer;
}
@property (weak, nonatomic) IBOutlet UITableView *freelancersTable;
@property (nonatomic,retain) NSMutableArray *freelancers;
@property (nonatomic,retain) NSArray *selectedCategories;
@end