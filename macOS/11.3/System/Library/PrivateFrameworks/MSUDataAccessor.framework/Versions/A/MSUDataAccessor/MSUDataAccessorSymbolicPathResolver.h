/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/Versions/A/MSUDataAccessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MSUDataAccessorSymbolicPathResolver : NSObject {

	NSMutableDictionary* _overrides;

}
+(id)symbolicPathResolver;
+(id)resolvedSymbol:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)resolve:(id)arg1 error:(id*)arg2 ;
-(void)overrideSymbol:(id)arg1 resolvedPath:(id)arg2 ;
@end

