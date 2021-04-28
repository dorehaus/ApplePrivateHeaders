/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/libswiftCore.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface Swift._SwiftObject : _UKNOWN_SUPERCLASS_ <NSObject> {

	Class isa;
	RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> refCounts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)retain;
+(void)release;
+(unsigned long long)retainCount;
+(id)autorelease;
+(char)_tryRetain;
+(char)_isDeallocating;
+(Class)class;
+(char)isMemberOfClass:(Class)arg1 ;
+(char)conformsToProtocol:(id)arg1 ;
+(char)respondsToSelector:(SEL)arg1 ;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(char)retainWeakReference;
+(char)allowsWeakReference;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)alloc;
+(char)isSubclassOfClass:(Class)arg1 ;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(id)autorelease;
-(char)_tryRetain;
-(char)_isDeallocating;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(Class)class;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(char)isProxy;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSZone*)zone;
-(unsigned long long)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(char)retainWeakReference;
-(char)allowsWeakReference;
-(char)isNSDate__;
-(char)isNSString__;
-(char)isNSCFConstantString__;
-(char)isNSNumber__;
-(void)_noteAssociatedObjects;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)_setWeaklyReferenced;
-(unsigned long long)_cfTypeID;
-(id)_copyDescription;
-(char)isNSArray__;
-(char)isNSDictionary__;
-(char)isNSSet__;
-(char)isNSData__;
-(char)isNSObject__;
-(char)isNSOrderedSet__;
-(char)isNSTimeZone__;
-(char)isNSValue__;
@end
