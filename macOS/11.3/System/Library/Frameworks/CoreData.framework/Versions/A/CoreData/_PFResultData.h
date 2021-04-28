/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _PFResultData : NSData {

	int _cd_rc;
	unsigned _length;
	id _parentObject;

}
+(Class)classForKeyedUnarchiver;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)length;
-(const void*)bytes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(Class)classForCoder;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(char)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(char)isEqualToData:(id)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(void)setParentObject:(id)arg1 ;
@end

