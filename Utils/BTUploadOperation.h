//
//  BTUploadOperation.h
//  BlueTriangle
//
//  Created by Julian Wilkison-Duran on 10/08/2020.
//  Copyright (c) 2020 BlueTriangle. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BTTimer;

@interface BTUploadOperation : NSOperation

@property (nonatomic, strong) BTTimer *timer;
@property (nonatomic, assign) NSInteger retryCount;
@property (nonatomic, assign, getter = wasSuccessful) BOOL successful;

+ (BTUploadOperation *)operationWithTimer:(BTTimer *)timer withURL:(NSURL *)url;

@end
