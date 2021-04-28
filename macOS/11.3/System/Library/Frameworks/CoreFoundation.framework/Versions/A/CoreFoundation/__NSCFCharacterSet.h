/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)invertedSet;
-(char)longCharacterIsMember:(unsigned)arg1 ;
-(char)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bitmapRepresentation;
-(char)characterIsMember:(unsigned short)arg1 ;
-(char)isSupersetOfSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
@end

