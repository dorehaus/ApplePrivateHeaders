/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableDictionary;

@interface TSUPathSet : NSObject <NSCopying> {

	NSMutableSet* mPaths;
	NSMutableDictionary* mBasePathToNumberMap;
	TSUPathSet* mUnderlyingSet;

}
+(void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(char*)arg3 baseNumber:(unsigned*)arg4 extension:(id*)arg5 ;
+(id)parseNumberOutOfBasename:(id)arg1 hasNumber:(char*)arg2 number:(unsigned*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)addPath:(id)arg1 ;
-(id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2 ;
-(void)setUnderlyingPathSet:(id)arg1 ;
-(char)isPathUsed:(id)arg1 ;
-(void)pathIsUsed:(id)arg1 ;
-(void)pathIsNoLongerUsed:(id)arg1 ;
-(void)unionPathSet:(id)arg1 ;
@end

