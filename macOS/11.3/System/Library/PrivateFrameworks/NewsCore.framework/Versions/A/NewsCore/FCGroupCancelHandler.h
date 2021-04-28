/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@class NSArray, NSString;

@interface FCGroupCancelHandler : NSObject <FCOperationCanceling> {

	NSArray* _cancelHandlers;

}

@property (nonatomic,copy) NSArray * cancelHandlers;                //@synthesize cancelHandlers=_cancelHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupCancelHandlerWithCancelHandlers:(id)arg1 ;
-(void)cancel;
-(id)initWithCancelHandlers:(id)arg1 ;
-(NSArray *)cancelHandlers;
-(void)setCancelHandlers:(NSArray *)arg1 ;
@end

