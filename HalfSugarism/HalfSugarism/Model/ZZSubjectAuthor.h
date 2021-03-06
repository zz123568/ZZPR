//
//  ZZSubjectAuthor.h
//  HalfSugarism
//
//  Created by zhaozheng on 16/4/11.
//  Copyright © 2016年 zhaozheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZZSubjectAuthor : NSObject
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *avatar;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *userCover;

@property (nonatomic, assign) NSInteger isOfficial;
@property (nonatomic, assign) NSInteger attentionType;
@end
