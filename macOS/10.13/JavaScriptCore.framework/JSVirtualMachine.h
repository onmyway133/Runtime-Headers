/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/JavaScriptCore.framework/Versions/A/JavaScriptCore
 */

@interface JSVirtualMachine : NSObject {
    NSMapTable * m_contextCache;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                unsigned char __a_; 
            } value; 
        } m_byte; 
    }  m_externalDataMutex;
    NSMapTable * m_externalObjectGraph;
    NSMapTable * m_externalRememberedSet;
    struct OpaqueJSContextGroup { } * m_group;
}

- (id).cxx_construct;
- (void)addExternalRememberedObject:(id)arg1;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;
- (bool)isOldExternalObject:(id)arg1;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;

// JSVirtualMachine (Internal)

+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup { }*)arg1;

- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext { }*)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext { }*)arg1;
- (struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { unsigned char x_1_2_1; } x_1_1_1; } x1; }*)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;

@end
