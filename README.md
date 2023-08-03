# rnw-070-experimental-nuget

Testing experimental nuget in an RNW csharp app with a dependency on an RNW csharp library.

myApp has created by commands

```
npx react-native init myApp --template react-native-template-typescript
cd myApp
npx react-native-windows-init --version 0.70.19 --overwrite --language "cs" --projectType "app" --experimentalNuGetDependency true
```

myLibrary has created

```
npx react-native init myLibrary --template react-native-template-typescript
cd myLibrary
npx react-native-windows-init --version 0.70.19 --overwrite --language "cs" --projectType "lib" --experimentalNuGetDependency true
```

myLibraryCpp has created

```
npx react-native init myLibraryCpp --template react-native-template-typescript
cd myLibraryCpp
npx react-native-windows-init --version 0.70.19 --overwrite --language "cpp" --projectType "lib" --experimentalNuGetDependency true
```

After creating the packages, myLibrary was added as a myApp dependency:

```
cd myApp
yarn add file:../myLibrary
```

Finishing did autolink:

```
npx react-native autolink-windows
```

Using:

- Yarn v1.21.1
- Node v16.13.1
- Windows Powershel v5.1.19041.3031
