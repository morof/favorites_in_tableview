//
//  fisiere.h
//  take1
//
//  Created by Morof Cristi on 2/22/13.
//  Copyright (c) 2013 Flipio Interactiv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface fisiere : UITableViewController {


    NSString *string;
    NSMutableArray *arr_folders;
    NSMutableArray *arr_files;
    NSMutableArray *bigArr;
    int foldere;
    int fisierele;
    
    UIButton *buttonFavs;
}

@property (nonatomic, retain)  NSString *string;
@property (nonatomic, retain)  NSMutableArray *arr_folders;
@property (nonatomic, retain)  NSMutableArray *arr_files;
@property (nonatomic, retain)  NSMutableArray *bigArr;
@property (nonatomic) int foldere;
@property (nonatomic) int fisierele;

@property (atomic,retain) UIButton *buttonFavs;
@end
