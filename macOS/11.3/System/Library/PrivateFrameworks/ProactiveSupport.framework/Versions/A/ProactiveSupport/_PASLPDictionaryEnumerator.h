/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/Versions/A/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol _PASLPReaderProtocol;
@class _PASLPDictionaryContext;

@interface _PASLPDictionaryEnumerator : NSEnumerator {

	id<_PASLPReaderProtocol> _reader;
	_PASLPDictionaryContext* _context;
	unsigned long long _ofs;

}
-(id)nextObject;
-(id)initWithLazyPlistReader:(id)arg1 context:(id)arg2 ;
@end

