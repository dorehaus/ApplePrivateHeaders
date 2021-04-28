/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScriptObjectSpecifier.h>

@interface NSIndexSpecifier : NSScriptObjectSpecifier {

	long long _index;

}

@property (assign) long long index; 
+(char)_fromContainerInfo:(const SCD_Struct_NS39*)arg1 andKeyCode:(unsigned)arg2 getAdjustedContainerInfo:(SCD_Struct_NS39*)arg3 andKey:(id*)arg4 ;
+(id)_containerAtIndex:(unsigned long long*)arg1 traversingBackward:(char)arg2 inContainerTree:(id)arg3 ofDepth:(unsigned long long)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)keyClassDescription;
-(char)_specifiesCollection;
-(id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 index:(long long)arg4 ;
-(id)initWithContainerClassDescription:(id)arg1 containerSpecifier:(id)arg2 key:(id)arg3 ;
-(unsigned long long)_specifiedObjectTreeDepth;
-(id)objectsByEvaluatingWithContainers:(id)arg1 ;
-(unsigned long long)_specifiedIndexOfObjectInContainer:(id)arg1 ;
-(char)_specifiesSingleIndexedObjectPerContainer;
-(char)_specifiesMultipleIndexedObjectsPerContainer;
-(id)_moreCompleteVariantOfTypeDescription:(id)arg1 ;
-(id)_typeDescription;
-(id)_simpleDescription;
-(id)_initFromRecord:(id)arg1 ;
-(char)_putKeyFormAndDataInRecord:(id)arg1 ;
@end

