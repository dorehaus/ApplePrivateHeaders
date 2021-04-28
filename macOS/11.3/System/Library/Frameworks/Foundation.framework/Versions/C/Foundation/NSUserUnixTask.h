/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUserScriptTask.h>

@class NSFileHandle;

@interface NSUserUnixTask : NSUserScriptTask

@property (retain) NSFileHandle * standardInput; 
@property (retain) NSFileHandle * standardOutput; 
@property (retain) NSFileHandle * standardError; 
+(char)isValidScriptFile:(id)arg1 error:(id*)arg2 ;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)executeWithArguments:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

