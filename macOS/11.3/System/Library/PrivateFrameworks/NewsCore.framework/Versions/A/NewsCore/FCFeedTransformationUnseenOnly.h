/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCReadingHistory, NSString;

@interface FCFeedTransformationUnseenOnly : NSObject <FCFeedTransforming> {

	FCReadingHistory* _history;

}

@property (nonatomic,retain) FCReadingHistory * history;              //@synthesize history=_history - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithReadingHistory:(id)arg1 ;
-(FCReadingHistory *)history;
-(void)setHistory:(FCReadingHistory *)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

