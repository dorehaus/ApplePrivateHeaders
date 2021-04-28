/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptObjC.framework/Versions/A/AppleScriptObjC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet;

@interface BAMetadataManager : NSObject {

	NSMutableDictionary* _enums;
	NSMutableDictionary* _constants;
	NSMutableDictionary* _structs;
	NSMutableDictionary* _methods;
	NSMutableDictionary* _protocol_instanceMethods;
	NSMutableDictionary* _protocol_classMethods;
	NSMutableDictionary* _functions;
	NSSet* _images;
	char _needsUpdate;

}

@property (retain,readonly) NSMutableDictionary * enums;                                 //@synthesize enums=_enums - In the implementation block
@property (retain,readonly) NSMutableDictionary * constants;                             //@synthesize constants=_constants - In the implementation block
@property (retain,readonly) NSMutableDictionary * structs;                               //@synthesize structs=_structs - In the implementation block
@property (retain,readonly) NSMutableDictionary * methods;                               //@synthesize methods=_methods - In the implementation block
@property (retain,readonly) NSMutableDictionary * protocol_instanceMethods;              //@synthesize protocol_instanceMethods=_protocol_instanceMethods - In the implementation block
@property (retain,readonly) NSMutableDictionary * protocol_classMethods;                 //@synthesize protocol_classMethods=_protocol_classMethods - In the implementation block
@property (retain,readonly) NSMutableDictionary * functions;                             //@synthesize functions=_functions - In the implementation block
@property (assign) char needsUpdate;                                                     //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (retain) NSSet * images;                                                       //@synthesize images=_images - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(char)needsUpdate;
-(NSMutableDictionary *)functions;
-(NSMutableDictionary *)methods;
-(void)setNeedsUpdate:(char)arg1 ;
-(NSSet *)images;
-(void)setImages:(NSSet *)arg1 ;
-(NSMutableDictionary *)constants;
-(const char*)signatureForProtocolInstanceSelector:(SEL)arg1 ;
-(const char*)signatureForProtocolClassSelector:(SEL)arg1 ;
-(const char*)annotatedEncodingForStructEncoding:(const char*)arg1 ;
-(id)constantValueForName:(id)arg1 ;
-(id)signatureForClass:(Class)arg1 selector:(SEL)arg2 ;
-(id)signatureForCFunction:(id)arg1 ;
-(NSMutableDictionary *)enums;
-(NSMutableDictionary *)structs;
-(NSMutableDictionary *)protocol_classMethods;
-(NSMutableDictionary *)protocol_instanceMethods;
-(void)addMethodsFromProtocol:(id)arg1 isInstanceMethod:(char)arg2 isRequiredMethod:(char)arg3 ;
-(id)pathForBridgeSupportOfType:(id)arg1 inBundle:(id)arg2 ;
-(char)loadMetadataFromBundle:(id)arg1 error:(id*)arg2 ;
-(char)loadMetadataFromImagePath:(id)arg1 ;
-(void)addMethodsFromAllProtocols;
-(void)loadMetadataForLoadedImages;
@end

