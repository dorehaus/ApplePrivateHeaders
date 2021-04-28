/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@interface BSMutableSettings : BSSettings
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forSetting:(unsigned long long)arg2 ;
-(void)removeAllSettings;
@end
