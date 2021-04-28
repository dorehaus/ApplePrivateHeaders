/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationIdentifying.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelBlock;
	NSString* _shortOperationDescription;
	NSString* _longOperationDescription;
	/*^block*/id _priorityBlock;

}

@property (nonatomic,copy) id cancelBlock;                                    //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) NSString * shortOperationDescription;              //@synthesize shortOperationDescription=_shortOperationDescription - In the implementation block
@property (nonatomic,copy) NSString * longOperationDescription;               //@synthesize longOperationDescription=_longOperationDescription - In the implementation block
@property (nonatomic,copy) id priorityBlock;                                  //@synthesize priorityBlock=_priorityBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;                      //@synthesize relativePriority=_relativePriority - In the implementation block
-(id)init;
-(void)cancel;
-(long long)relativePriority;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(NSString *)shortOperationDescription;
-(void)setRelativePriority:(long long)arg1 ;
-(NSString *)longOperationDescription;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 shortDescription:(id)arg3 longDescription:(id)arg4 ;
-(id)initWithCancelBlock:(/*^block*/id)arg1 priorityBlock:(/*^block*/id)arg2 ;
-(id)priorityBlock;
-(void)setShortOperationDescription:(NSString *)arg1 ;
-(void)setLongOperationDescription:(NSString *)arg1 ;
-(void)setPriorityBlock:(id)arg1 ;
@end

