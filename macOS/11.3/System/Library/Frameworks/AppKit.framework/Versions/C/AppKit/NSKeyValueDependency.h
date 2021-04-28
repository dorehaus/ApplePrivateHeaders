/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKeyValueDependencyContext;

@interface NSKeyValueDependency : NSObject {

	NSKeyValueDependencyContext* _context;
	unsigned long long _invalidationCount;

}

@property (getter=isValid,readonly) char valid; 
@property (retain) NSKeyValueDependencyContext * context;              //@synthesize context=_context - In the implementation block
@property (assign) unsigned long long invalidationCount;               //@synthesize invalidationCount=_invalidationCount - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)invalidate;
-(char)isValid;
-(id)initWithContext:(id)arg1 ;
-(NSKeyValueDependencyContext *)context;
-(void)setContext:(NSKeyValueDependencyContext *)arg1 ;
-(unsigned long long)invalidationCount;
-(id)initWithContext:(id)arg1 invalidationCount:(unsigned long long)arg2 ;
-(void)setInvalidationCount:(unsigned long long)arg1 ;
@end

