/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/Versions/A/IOKitten
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IOKObject : NSObject {

	unsigned _object;

}

@property (nonatomic,copy,readonly) NSString * ioClassName; 
@property (nonatomic,readonly) unsigned object;                          //@synthesize object=_object - In the implementation block
+(Class)classForRegistryEntry:(unsigned)arg1 ;
+(id)ioSuperClassNameForClassName:(id)arg1 ;
+(id)bundleIdentifierForClassName:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned)object;
-(NSString *)ioClassName;
-(char)conformsToIOClassName:(id)arg1 ;
-(id)initWithIOObject:(unsigned)arg1 ;
@end

