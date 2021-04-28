/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSViewLayerFilter.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAFilter : NSObject <NSViewLayerFilter, NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned _type;
	NSString* _name;
	unsigned _flags;
	void* _attr;
	void* _cache;

}

@property (readonly) char NS_isSourceOver; 
@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (assign) char cachesInputImage; 
@property (getter=isAccessibility) char accessibility; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)filterTypes;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)filterWithType:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(id)attributesForKey:(id)arg1 ;
-(char)NS_isSourceOver;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(char)cachesInputImage;
-(char)isAccessibility;
-(id)attributesForKeyPath:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)type;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(char)isEnabled;
-(id)valueForKey:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)setDefaults;
-(Object*)CA_copyRenderValue;
-(void)setAccessibility:(char)arg1 ;
-(id)inputKeys;
-(id)outputKeys;
-(void)setCachesInputImage:(char)arg1 ;
@end
