/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {

	NSArray* _observances;
	unsigned long long _cachedHash;
	char _cachedIsShareable;

}

@property (nonatomic,readonly) char containsOnlyInternalObservationHelpers; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_copyByAddingObservance:(id)arg1 ;
-(id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3 ;
-(char)containsOnlyInternalObservationHelpers;
@end

