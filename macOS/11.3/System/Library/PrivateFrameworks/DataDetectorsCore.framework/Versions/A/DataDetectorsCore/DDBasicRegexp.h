/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DDBasicRegexp : NSObject <NSCopying> {

	NSString* _humanReadableName;

}
+(id)epsilon;
-(int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2 ;
-(id)prettyPrintWithPriority:(int)arg1 ;
-(void)appendDescriptionToString:(id)arg1 depth:(int)arg2 ;
-(char)acceptEmptyWordWithManager:(id)arg1 ;
-(id)effectiveArgument;
-(id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3 ;
-(id)monElement;
-(id)computeTypeFromParent:(id)arg1 withManager:(id)arg2 ;
-(void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)humanReadableName;
-(void)setHumanReadableName:(id)arg1 ;
@end

