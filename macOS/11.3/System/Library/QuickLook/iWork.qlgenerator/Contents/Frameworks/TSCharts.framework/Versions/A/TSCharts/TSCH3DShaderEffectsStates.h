/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TSCH3DShaderEffectsStates : NSObject <NSCopying> {

	NSMutableDictionary* _objects;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)clear;
-(void)setState:(id)arg1 forStateInfo:(id)arg2 ;
-(void)setValueState:(id)arg1 forKey:(id)arg2 ;
-(id)valueStateForKey:(id)arg1 ;
-(id)stateForStateInfo:(id)arg1 createIfNil:(char)arg2 ;
@end

