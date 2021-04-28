/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSObservable.h>

@class NSObject, NSString;

@interface _AMSKeyValueObservable : AMSObservable {

	NSObject* _context;
	NSString* _keyPath;
	NSObject* _object;

}

@property (retain) NSObject * context;              //@synthesize context=_context - In the implementation block
@property (copy) NSString * keyPath;                //@synthesize keyPath=_keyPath - In the implementation block
@property (__weak) NSObject * object;               //@synthesize object=_object - In the implementation block
-(void)setObject:(NSObject *)arg1 ;
-(NSObject *)object;
-(char)cancel;
-(NSString *)keyPath;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject *)context;
-(void)setContext:(NSObject *)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(char)sendCompletion;
@end
