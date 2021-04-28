/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <UIFoundation/NSLayoutManager.h>

@protocol UnifiedFieldLayoutManagerDelegate;
@interface UnifiedFieldLayoutManager : NSLayoutManager {

	id<UnifiedFieldLayoutManagerDelegate> _unifiedFieldDelegate;

}

@property (assign,nonatomic,__weak) id<UnifiedFieldLayoutManagerDelegate> unifiedFieldDelegate;              //@synthesize unifiedFieldDelegate=_unifiedFieldDelegate - In the implementation block
-(void)fillBackgroundRectArray:(const CGRect*)arg1 count:(unsigned long long)arg2 forCharacterRange:(NSRange)arg3 color:(id)arg4 ;
-(void)setUnifiedFieldDelegate:(id<UnifiedFieldLayoutManagerDelegate>)arg1 ;
-(id<UnifiedFieldLayoutManagerDelegate>)unifiedFieldDelegate;
@end

