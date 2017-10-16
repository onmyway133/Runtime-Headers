/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCPlugInPatch : QCPatch {
    unsigned long long  _executionLevel;
    struct __CFDictionary { } * _inputValueCache;
    QCPlugIn * _plugIn;
    struct __CFDictionary { } * _propertyPorts;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (id)attributesWithIdentifier:(id)arg1;
+ (int)executionModeWithIdentifier:(id)arg1;
+ (BOOL)shouldCreateIvarPorts;
+ (int)timeModeWithIdentifier:(id)arg1;

- (id)_addInputPortWithClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3;
- (id)_addOutputPortWithClass:(Class)arg1 forKey:(id)arg2 attributes:(id)arg3;
- (void)cleanup:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disable:(id)arg1;
- (void)enable:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (double)nextExecutionTime:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)plugIn;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (BOOL)setState:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;

// QCPlugInPatch (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
