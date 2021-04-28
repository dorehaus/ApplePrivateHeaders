/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputMenuUI.framework/Versions/A/TextInputMenuUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputMenuUI/TextInputMenuUI-Structs.h>
#import <libobjc.A.dylib/TSMMessageProtocol.h>

@class NSArray;

@interface TSMMessageRecentUsageResponse : NSObject <TSMMessageProtocol> {

	NSArray* _sortedRecentlyUsedInputSourceUniqueIdentifiers;

}

@property (nonatomic,readonly) NSArray * sortedRecentlyUsedInputSourceUniqueIdentifiers;              //@synthesize sortedRecentlyUsedInputSourceUniqueIdentifiers=_sortedRecentlyUsedInputSourceUniqueIdentifiers - In the implementation block
-(NSArray *)sortedRecentlyUsedInputSourceUniqueIdentifiers;
-(void)dealloc;
-(id)init;
-(CFDataRef)copyMessageReceiver:(int)arg1 withInfo:(id)arg2 ;
-(void)replyReceiver:(int)arg1 withInfo:(id)arg2 ;
@end

