/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {

	OITSULinkedPointerSetEntry* mTail;
	OITSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithLastEntry:(id)arg1 ;
@end

