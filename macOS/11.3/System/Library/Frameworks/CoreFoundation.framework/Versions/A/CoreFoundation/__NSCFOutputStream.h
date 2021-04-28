/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@interface __NSCFOutputStream : NSOutputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)delegate;
-(unsigned long long)streamStatus;
-(id)streamError;
-(char)hasSpaceAvailable;
-(void)open;
-(void)close;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS9*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithURL:(id)arg1 append:(char)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(id)initToFileAtPath:(id)arg1 append:(char)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
@end

